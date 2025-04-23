## Ejercicios de Principios de Programación

### Ejercicio 2

#### a. Cuenta cuántas veces aparece el número `n` en el arreglo `arr`
```cpp
int ocurreVeces(const int arr[], int size, int n) {
    // arr: arreglo de enteros
    // size: cantidad de elementos del arreglo
    // n: número a buscar
    int contador = 0;
    for (int i = 0; i < size; i++) { // Recorre todo el arreglo
        if (arr[i] == n) { // Si el valor actual es igual a n, lo cuenta
            contador++;
        }
    }
    return contador;
}
```

#### b. Verifica si el número `n` está presente en el arreglo `arr`
```cpp
bool pertenece(const int arr[], int size, int n) {
    // arr: arreglo de enteros
    // size: cantidad de elementos del arreglo
    // n: número a buscar
    for (int i = 0; i < size; i++) { // Recorre todo el arreglo
        if (arr[i] == n) { // Si encuentra a n, devuelve true inmediatamente
            return true;
        }
    }
    return false; // Si no lo encuentra, devuelve false
}
```

### Ejercicio 3

#### Calcula el promedio de los elementos de un arreglo
```cpp
float promedio(const int a[], int size) {
    // a: arreglo de enteros
    // size: cantidad de elementos
    int suma = 0;
    for (int i = 0; i < size; i++) { // Acumula la suma de todos los elementos
        suma += a[i];
    }
    return (float)suma / size; // Devuelve el promedio como flotante
}
```

### Ejercicio 4

#### Copia el contenido de un arreglo en otro
```cpp
void copiar(const int arr[], int copia[], int size) {
    // arr: arreglo original
    // copia: arreglo destino
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) { // Copia cada elemento del arreglo original al destino
        copia[i] = arr[i];
    }
}
```

### Ejercicio 5

#### Encuentra el mínimo y el máximo, y sus posiciones
```cpp
void minMax(const int a[], int size, int &min, int &posMin, int &max, int &posMax) {
    // a: arreglo de enteros
    // size: cantidad de elementos
    // min: mínimo valor (por referencia)
    // posMin: posición del mínimo (por referencia)
    // max: máximo valor (por referencia)
    // posMax: posición del máximo (por referencia)
    min = a[0];
    max = a[0];
    posMin = 0;
    posMax = 0;

    for (int i = 1; i < size; i++) { // Recorre el arreglo desde la segunda posición
        if (a[i] < min) { // Si encuentra un nuevo mínimo, lo actualiza
            min = a[i];
            posMin = i;
        }
        if (a[i] > max) { // Si encuentra un nuevo máximo, lo actualiza
            max = a[i];
            posMax = i;
        }
    }
}
```

### Ejercicio 6

#### Encuentra el elemento adicional entre dos arreglos
```cpp
int elemDiferencial(int a[], int b[], int size) {
    // a: arreglo base
    // b: arreglo con un elemento adicional
    // size: tamaño de a (b tiene size+1)
    int resultado = 0;
    for (int i = 0; i < size; i++) { // Aplica XOR a cada par de elementos a[i] y b[i]
        resultado ^= a[i];
        resultado ^= b[i];
    }
    resultado ^= b[size]; // Aplica XOR final con el último elemento de b
    return resultado;
}
```

### Ejercicio 7 (Booleanos)

#### a. Cambia todos los true por false y viceversa
```cpp
void intercambiar(bool arr[], int size) {
    // arr: arreglo de booleanos
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) { // Recorre el arreglo y niega cada valor
        arr[i] = !arr[i]; // Cambia true a false y viceversa
    }
}
```

#### b. Cuenta la cantidad de valores true
```cpp
int cantTrue(bool arr[], int size) {
    // arr: arreglo de booleanos
    // size: cantidad de elementos
    int contador = 0;
    for (int i = 0; i < size; i++) { // Recorre el arreglo
        if (arr[i]) { // Si el valor es true, suma 1
            contador++;
        }
    }
    return contador;
}
```

#### c. Verifica si hay al menos k valores true
```cpp
bool alMenosK(bool arr[], int size, int k) {
    // arr: arreglo de booleanos
    // size: cantidad de elementos
    // k: cantidad mínima de valores true necesarios
    int contador = 0;
    for (int i = 0; i < size; i++) { // Recorre el arreglo
        if (arr[i]) { // Si el valor es true, incrementa el contador
            contador++;
            if (contador >= k) return true; // Si ya tiene k o más, devuelve true
        }
    }
    return false; // No alcanzó la cantidad mínima de true
}
```

#### d. Verifica si hay a lo sumo k valores true
```cpp
bool aLoSumok(bool arr[], int size, int k) {
    // arr: arreglo de booleanos
    // size: cantidad de elementos
    // k: cantidad máxima de valores true permitidos
    int contador = 0;
    for (int i = 0; i < size; i++) { // Recorre el arreglo
        if (arr[i]) { // Si el valor es true, incrementa el contador
            contador++;
            if (contador > k) return false; // Si supera k, devuelve false
        }
    }
    return true; // Nunca superó k, por lo tanto devuelve true
}
```

### Ejercicio 8

#### Invierte el orden de los elementos del arreglo
```cpp
void invertir(int arr[], int size) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    for (int i = 0; i < size / 2; i++) { // Recorre hasta la mitad del arreglo
        int temp = arr[i];
        arr[i] = arr[size - 1 - i]; // Intercambia el elemento con su opuesto
        arr[size - 1 - i] = temp;
    }
}
```

### Ejercicio 9

#### Verifica si dos arreglos son iguales
```cpp
bool sonIguales(int a[], int b[], int size) {
    // a, b: arreglos de enteros
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) { // Compara cada elemento de a con el de b
        if (a[i] != b[i]) return false; // Si alguno difiere, retorna false
    }
    return true; // Si todos coinciden, retorna true
}
```

### Ejercicio 10

#### Desplaza los elementos una posición a la derecha
```cpp
void rotarDerecha(int arr[], int size) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    int ultimo = arr[size - 1];
    for (int i = size - 1; i > 0; i--) { // Desplaza cada elemento hacia la derecha
        arr[i] = arr[i - 1];
    }
    arr[0] = ultimo; // Coloca el último elemento al principio
}
```

### Ejercicio 11

#### Verifica si un arreglo está ordenado de menor a mayor
```cpp
bool estaOrdenado(int arr[], int size) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    for (int i = 1; i < size; i++) { // Comienza desde el segundo elemento
        if (arr[i] < arr[i - 1]) return false; // Si encuentra un valor menor que el anterior, no está ordenado
    }
    return true; // Todos los valores están en orden
}
```

### Ejercicio 12

#### Cuenta cuántos elementos están en un rango dado
```cpp
int contarEnRango(int arr[], int size, int desde, int hasta) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    // desde: valor mínimo del rango
    // hasta: valor máximo del rango
    int contador = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= desde && arr[i] <= hasta) { // Si está dentro del rango
            contador++;
        }
    }
    return contador;
}
```

### Ejercicio 13

#### Determina si todos los elementos de un arreglo son distintos
```cpp
bool todosDistintos(int arr[], int size) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) return false; // Si encuentra dos elementos iguales, retorna false
        }
    }
    return true;
}
```

### Ejercicio 14

#### Suma los elementos de dos arreglos en uno nuevo
```cpp
void sumaArreglos(const int a[], const int b[], int resultado[], int size) {
    // a, b: arreglos a sumar
    // resultado: arreglo donde guardar la suma
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) {
        resultado[i] = a[i] + b[i]; // Suma elemento a elemento
    }
}
```

### Ejercicio 15

#### Determina el valor que más se repite (moda)
```cpp
int moda(int arr[], int size) {
    // arr: arreglo de enteros
    // size: cantidad de elementos
    int maxFrecuencia = 0;
    int moda = arr[0];
    for (int i = 0; i < size; i++) {
        int frecuencia = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) frecuencia++;
        }
        if (frecuencia > maxFrecuencia) {
            maxFrecuencia = frecuencia;
            moda = arr[i];
        }
    }
    return moda;
}
```

### Ejercicio 16

#### Invierte los valores booleanos de un arreglo si hay más de la mitad verdaderos
```cpp
void condicionalInvertir(bool arr[], int size) {
    // arr: arreglo de booleanos
    // size: cantidad de elementos
    int contadorTrue = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i]) contadorTrue++;
    }
    if (contadorTrue > size / 2) {
        for (int i = 0; i < size; i++) {
            arr[i] = !arr[i];
        }
    }
}
```

### Ejercicio 17

#### Devuelve el valor máximo entre dos arreglos en cada posición
```cpp
void maximoElemento(const int a[], const int b[], int resultado[], int size) {
    // a, b: arreglos a comparar
    // resultado: arreglo de máximos
    // size: cantidad de elementos
    for (int i = 0; i < size; i++) {
        resultado[i] = (a[i] > b[i]) ? a[i] : b[i]; // Asigna el mayor valor entre a[i] y b[i]
    }
}
```
