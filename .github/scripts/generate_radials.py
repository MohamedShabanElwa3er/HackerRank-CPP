import matplotlib.pyplot as plt

# ==============================
# CONFIGURATION
# ==============================
progress = 75   # TODO: replace with auto-count later
language = "C++"

# ==============================
# DARK THEME RADIAL CHART
# ==============================
fig, ax = plt.subplots(figsize=(4, 4), subplot_kw=dict(polar=True))

# Force dark background
fig.patch.set_facecolor("#0d1117")
ax.set_facecolor("#0d1117")

# Background circle (100%)
ax.barh(1, 100, color="#30363d", height=0.3)

# Progress arc
ax.barh(1, progress, color="#58a6ff", height=0.3)

# Remove axes for clean look
ax.set_axis_off()

# ==============================
# ADD CENTER TEXT (perfectly aligned)
# ==============================
fig.text(
    0.5, 0.5,                    # center of figure
    f"{language}\n{progress}%",  # text
    ha="center",
    va="center",
    fontsize=16,
    fontweight="bold",
    color="#c9d1d9"
)

# ==============================
# SAVE OUTPUTS
# ==============================
# Save SVG with dark background
plt.savefig("radial-cpp.svg", format="svg", bbox_inches="tight", facecolor="#0d1117")

# Save PNG (GitHub shows this more consistently)
plt.savefig("radial-cpp.png", format="png", bbox_inches="tight", facecolor="#0d1117", dpi=300)

plt.close()
