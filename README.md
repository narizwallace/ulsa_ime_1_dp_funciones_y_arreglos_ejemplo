# Funciones con arreglos: suma de dos arreglos

Ejemplo de clase de **Diseño de Programas** (Ingeniería en Mecatrónica, La Salle Saltillo).

El programa llena dos arreglos de números, los suma posición por posición en un tercer arreglo y muestra cada resultado con el formato:

```
NUMERO 1 + NUMERO 2 = TOTAL
```

## ¿Qué se practica?

- Pasar un arreglo a una función (`double datos[]`) junto con su tamaño.
- Que el arreglo **no se copia**: la función trabaja sobre el arreglo original.
- Usar `const` cuando la función solo lee el arreglo.
- Recorrer varios arreglos con el mismo índice.
- Reutilizar funciones de una librería propia (`leerDecimal` de `utilerias.h`).

## Estructura del repositorio

```
.
├── include/
│   ├── arreglos.h     # Funciones del ejemplo
│   └── utilerias.h    # leerEntero, leerDecimal y leerCadena (no modificar)
├── src/
│   └── main.cpp       # Programa principal
├── .gitignore
└── README.md
```

## Funciones de `arreglos.h`

| Función | ¿Qué hace? | Estado |
|---|---|---|
| `llenarArreglo(datos, tam)` | Pide un número por cada posición y lo guarda en el arreglo | Lista |
| `sumarArreglos(a, b, total, tam)` | Guarda en `total[i]` la suma de `a[i]` y `b[i]` | Por completar en clase |
| `imprimirSumas(a, b, total, tam)` | Muestra cada línea `a[i] + b[i] = total[i]` | Por completar en clase |

Las funciones por completar tienen comentarios `TODO` con preguntas que guían la solución.

## Compilar y ejecutar

Desde la carpeta principal del repositorio:

```bash
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o suma
./suma
```

En Windows, el ejecutable se llama `suma.exe` y se ejecuta con `.\suma.exe`.

> **Nota técnica:** `-Iinclude` le indica al compilador que busque los archivos `.h` en la carpeta `include`. Sin esa opción, no encuentra `arreglos.h` ni `utilerias.h`.

> **Nota de C++:** mientras `sumarArreglos` e `imprimirSumas` estén vacías, el compilador mostrará advertencias *unused parameter*. Una advertencia no impide que el programa se ejecute, pero es una pista: esos parámetros todavía no se usan. Al completar las funciones, las advertencias desaparecen.

## Ejemplo de ejecución (con las funciones completas)

```
Llenando el arreglo A:
Escribe el numero 1: 5
Escribe el numero 2: 2.5
...

Llenando el arreglo B:
Escribe el numero 1: 3
Escribe el numero 2: 1
...

Resultados de las sumas:
5 + 3 = 8
2.5 + 1 = 3.5
...
```

## Pruebas sugeridas

- Números enteros y decimales.
- Números negativos (`-4 + 4 = 0`).
- Ceros.
- Texto en lugar de número: `leerDecimal` debe volver a pedirlo.