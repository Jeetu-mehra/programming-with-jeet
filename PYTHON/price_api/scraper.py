from playwright.sync_api import sync_playwright
import re

def clean_price(text):
    nums = re.sub(r"[^\d]", "", text)
    return int(nums) if nums else 0


def get_prices(product_url: str):
    results = []

    with sync_playwright() as p:
        browser = p.chromium.launch(headless=False)
        page = browser.new_page(
            user_agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/120 Safari/537.36"
        )

        buyhatke_url = f"https://buyhatke.com/{product_url}"

        page.goto(buyhatke_url, timeout=60000)
        page.wait_for_selector("button:has(p.font-bold)", timeout=15000)

        page.evaluate("window.scrollTo(0, document.body.scrollHeight)")
        page.wait_for_timeout(2000)

        sellers = page.locator("button:has(p.font-bold)")

        for i in range(sellers.count()):
            seller = sellers.nth(i)

            # Price
            price_text = seller.locator("p.font-bold").first.inner_text()
            price = clean_price(price_text)

            platform = None

            img = seller.locator("img[alt]")
            if img.count() > 0:
                platform = img.first.get_attribute("alt")

            if not platform:
                aria = seller.get_attribute("aria-label")
                if aria:
                    platform = aria

            if not platform:
                text = seller.inner_text().split("\n")
                if text:
                    platform = text[0]

            results.append({
                "platform": platform.strip() if platform else "Unknown",
                "price": price
            })

        browser.close()

    return results
