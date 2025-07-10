import matplotlib.pyplot as plt
import numpy as np

# Створимо сітку координат
x_vals = np.linspace(-10, 10, 1000)
y_vals = np.linspace(-10, 10, 1000)
X, Y = np.meshgrid(x_vals, y_vals)

# Області для кожного випадку
region1 = (Y >= 2) & (X >= np.maximum(2 * Y, Y + 2))
region2 = (X >= Y + 2) & (X < 2 * Y) & (Y <= (2 * X - 2) / 3)
region3 = (X >= 2 * Y) & (X < Y + 2) & (Y >= (2 * X - 2) / 3)
region4 = (X < np.minimum(2 * Y, Y + 2)) & (Y <= 2)

# Побудова графіку
plt.figure(figsize=(10, 10))
plt.contourf(X, Y, region1, levels=[0.5, 1], colors=["#ffcccc"], alpha=0.6, label="Випадок 1")
plt.contourf(X, Y, region2, levels=[0.5, 1], colors=["#ccffcc"], alpha=0.6, label="Випадок 2")
plt.contourf(X, Y, region3, levels=[0.5, 1], colors=["#ccccff"], alpha=0.6, label="Випадок 3")
plt.contourf(X, Y, region4, levels=[0.5, 1], colors=["#ffffcc"], alpha=0.6, label="Випадок 4")

# Додаткові стилі
plt.axhline(0, color='black', linewidth=1)
plt.axvline(0, color='black', linewidth=1)
plt.xlabel("x")
plt.ylabel("y")
plt.title("Графік області розв'язків нерівності |x - 2y| ≤ |x - y - 2|")
plt.grid(True)
plt.xlim(-5, 10)
plt.ylim(-5, 10)
plt.legend(["Випадок 1", "Випадок 2", "Випадок 3", "Випадок 4"], loc="upper right")

plt.show()
