import requests
import matplotlib.pyplot as plt
import os

# ==============================
# CONFIGURATION
# ==============================
REPO = "MohamedShabanElwa3er/HackerRank-CPP"   # change if needed
LANGUAGE = "C++"
COLOR = "#58a6ff"   # radial arc color
OUTPUT_SVG = "radial-cpp.svg"
OUTPUT_PNG = "radial-cpp.png"

# Optional: use GitHub token for private repos or rate limits
TOKEN = os.getenv("GITHUB_TOKEN")  # set in Actions secrets
HEADERS = {"Authorization": f"token {TOKEN}"} if TOKEN else {}

# ==============================
# FETCH LANGUAGE DATA
# ==============================
url = f"https://api.github.com/repos/{REPO}/languages"
response = requests.get(url, headers=HEADERS)
if response.status_code != 200:
    raise Exception(f"GitHub API error: {response.status_code} {response.text}")

data = response.json()
total_bytes = sum(data.values())

if LANGUAGE not in data:
    progress = 0
else:
    progress = round((data[LANGUAGE] / total_bytes) * 100)

print(f"[INFO] {LANGUAGE} usage: {progress}%")

# ==============================
# PLOT DARK THEME RADIAL
# ==============================
fig, ax = plt.subplots(figsize=(4, 4), subplot_kw=dict(polar=True))

# Dark background
fig.patch.set_facecolor("#0d1117")
ax.set_facecolor("#0d1117")

# Background circle (100%)
ax.barh(1, 100, color="#30363d", height=0.3)

# Progress arc
ax.barh(1, progress, color=COLOR, height=0.3)

# Clean look
ax.set_axis_off()

# Centered text
ax.text(
    0, 0,
    f"{LANGUAGE}\n{progress}%",
    ha="center", va="center",
    fontsize=16,
    fontweight="bold",
    color="#c9d1d9",
    transform=ax.transAxes
)

# ==============================
# SAVE OUTPUTS
# ==============================
plt.savefig(OUTPUT_SVG, format="svg", bbox_inches="tight", facecolor="#0d1117")
plt.savefig(OUTPUT_PNG, format="png", bbox_inches="tight", facecolor="#0d1117", dpi=300)
plt.close()
