"""
Script to export HTML to PDF using Chrome or Edge headless mode
"""
import subprocess
import os
import sys

def convert_html_to_pdf(html_path, pdf_path):
    chrome_paths = [
        r"C:\Program Files\Google\Chrome\Application\chrome.exe",
        r"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe",
        r"C:\Program Files\Microsoft\Edge\Application\msedge.exe",
        r"C:\Program Files (x86)\Google\Chrome\Application\chrome.exe"
    ]

    browser_exe = None
    for p in chrome_paths:
        if os.path.exists(p):
            browser_exe = p
            break

    if not browser_exe:
        print("No browser found for PDF export.")
        return False

    abs_html = os.path.abspath(html_path)
    abs_pdf = os.path.abspath(pdf_path)

    cmd = [
        browser_exe,
        "--headless",
        "--disable-gpu",
        "--no-pdf-header-footer",
        f"--print-to-pdf={abs_pdf}",
        f"file:///{abs_html.replace(os.sep, '/')}"
    ]

    print(f"Running command: {' '.join(cmd)}")
    res = subprocess.run(cmd, capture_output=True, text=True)
    if os.path.exists(abs_pdf) and os.path.getsize(abs_pdf) > 0:
        print(f"Successfully generated PDF: {abs_pdf} (size: {os.path.getsize(abs_pdf)} bytes)")
        return True
    else:
        print(f"Failed to generate PDF. Returncode: {res.returncode}, stderr: {res.stderr}")
        return False

if __name__ == '__main__':
    convert_html_to_pdf('ML_Lab_Assignment_4.html', 'ML_Lab_Assignment_4.pdf')
