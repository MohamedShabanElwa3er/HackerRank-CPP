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

# Add dark rectangle to ensure background is never transparent
ax.add_patch(plt.Circle((0, 0), 2, color="#0d1117", zorder=-1))

# Grey circle background (100%)
ax.barh(1, 100, color="#30363d")

# Progress arc
ax.barh(1, progress, color="#58a6ff")

# Center text (language + percentage)
ax.text(
    0, 0,
    f"{language}\n{progress}%",
    ha="center",
    va="center",
    fontsize=16,
    fontweight="bold",
    color="#c9d1d9"   # light gray for dark mode
)

# Remove axes for clean look
ax.set_axis_off()

# ==============================
# SAVE OUTPUTS
# ==============================
# Save SVG with dark background
plt.savefig("radial-cpp.svg", format="svg", bbox_inches="tight", facecolor="#0d1117")

# Save PNG (GitHub shows this more consistently)
plt.savefig("radial-cpp.png", format="png", bbox_inches="tight", facecolor="#0d1117", dpi=300)

plt.close()
