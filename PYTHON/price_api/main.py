from fastapi import FastAPI, Query
from scraper import get_prices

app = FastAPI(
    title="PriceHawk API",
    description="Compare product prices using BuyHatke",
    version="1.0"
)

@app.get("/")
def root():
    return {"message": "PriceHawk API is running 🚀"}


@app.get("/price")
def price_check(
    url: str = Query(..., description="Amazon product URL")
):
    data = get_prices(url)

    return {
        "success": True,
        "count": len(data),
        "data": data
    }
