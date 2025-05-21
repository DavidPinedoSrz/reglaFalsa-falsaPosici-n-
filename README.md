# Método de la Regla Falsa (Falsa Posición) en C++.

## 📌 Descripción

Este repositorio contiene una implementación del método numérico de la Regla Falsa (también conocido como Falsa Posición) para encontrar raíces de ecuaciones no lineales, escrito en C++.

## ✨ Características

- Implementa una clase Regla_Falsa que encapsula toda la lógica del método.
- Calcula el error aproximado en cada iteración.
- Utiliza series de Taylor para aproximar la función coseno.
- Detiene el proceso cuando el error es menor a 0.0001 (0.01%).

## 🚀 Compilación y ejecución

1. Clona el repositorio:

```
git clone https://github.com/DavidPinedoSrz/reglaFalsa-falsaPosici-n-.git
```

2. Para compilar y ejecutar:

```
g++ regla_falsa.cpp -o regla_falsa -lm
./regla_falsa
```

## ✨ Salida del programa

El programa mostrará en consola:

- El número de iteración.
- El valor actual de x0.
- El error calculado en cada paso.
- La raíz aproximada final cuando se cumple el criterio de parada.

## ✨ Dependencias

- Compilador de C++ (g++, clang, etc.).
- Biblioteca math.h para funciones matemáticas.
- Biblioteca iomanip para formato de salida.
- Biblioteca conio.h (específica de Windows) para getch().
