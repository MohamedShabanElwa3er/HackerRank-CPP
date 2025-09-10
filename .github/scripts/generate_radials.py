import matplotlib.pyplot as plt

# ==============================
# CONFIGURATION
# ==============================
# You can update this number manually OR later fetch from HackerRank API/scraping
progress = 75   # percentage of problems solved (0–100)
language = "C++"

# ==============================
# PLOT RADIAL CHART
# ==============================
fig, ax = plt.subplots(figsize=(4, 4), subplot_kw=dict(polar=True))

# Full circle background (grey)
ax.barh(1, 100, color="#e0e0e0")

# Progress bar (blue)
ax.barh(1, progress, color="#00599C")

# Add percentage + language name in center
ax.text(
    0, 0,
    f"{language}\n{progress}%",
    ha="center",
    va="center",
    fontsize=16,
    fontweight="bold",
    color="#333333"
)

# Remove axes for clean look
ax.set_axis_off()

# ==============================
# SAVE OUTPUT
# ==============================
plt.savefig("radial-cpp.svg", format="svg", bbox_inches="tight")
plt.close()
