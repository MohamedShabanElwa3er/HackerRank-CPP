import matplotlib.pyplot as plt

# ==============================
# CONFIGURATION
# ==============================
progress = 75   # replace with actual percentage later
language = "C++"

# ==============================
# PLOT RADIAL CHART (Dark Theme)
# ==============================
fig, ax = plt.subplots(figsize=(4, 4), subplot_kw=dict(polar=True))
fig.patch.set_facecolor("#0d1117")  # GitHub dark background
ax.set_facecolor("#0d1117")

# Background circle (dark gray)
ax.barh(1, 100, color="#30363d")

# Progress bar (blue highlight)
ax.barh(1, progress, color="#58a6ff")

# Add text inside the circle
ax.text(
    0, 0,
    f"{language}\n{progress}%",
    ha="center",
    va="center",
    fontsize=16,
    fontweight="bold",
    color="#c9d1d9"
)

# Remove axes for clean look
ax.set_axis_off()

# Save output (dark SVG)
plt.savefig("radial-cpp.svg", format="svg", bbox_inches="tight", facecolor="#0d1117")
plt.close()
