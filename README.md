# 🏊 C Piscine — C 02

> *Módulo sobre strings y manipulación de caracteres de la C Piscine de 42. ¡A trabajar con cadenas!* 🔤

---

## 📋 Información general

| Campo | Detalle |
|---|---|
| 📦 Módulo | C 02 |
| 🔖 Versión | 6 |
| ⚙️ Compilación | `cc -Wall -Wextra -Werror` |
| 📏 Norma | `norminette -R CheckForbiddenSourceHeader` |
| 🏁 Milestone de validación | **50%** |

---

## ⚠️ Normas importantes

- ✅ Todos los archivos `.c` deben incluir el **header estándar de 42**
- ✅ El código debe cumplir la **Norma de 42**
- ✅ Las funciones **no deben terminar inesperadamente** (segfault, bus error, double free)
- ✅ Solo entregar los archivos indicados en cada ejercicio

---

## 📚 Ejercicios

### ✏️ Ejercicio 00 — `ft_strcpy`

| | |
|---|---|
| 📁 Directorio | `ex00/` |
| 📄 Archivo | `ft_strcpy.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strcpy` (`man strcpy`).

```c
char *ft_strcpy(char *dest, char *src);
```

---

### ✏️ Ejercicio 01 — `ft_strncpy`

| | |
|---|---|
| 📁 Directorio | `ex01/` |
| 📄 Archivo | `ft_strncpy.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strncpy` (`man strncpy`).

```c
char *ft_strncpy(char *dest, char *src, unsigned int n);
```

---

### ✏️ Ejercicio 02 — `ft_str_is_alpha`

| | |
|---|---|
| 📁 Directorio | `ex02/` |
| 📄 Archivo | `ft_str_is_alpha.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el string contiene **únicamente** caracteres alfabéticos, `0` en caso contrario. Devuelve `1` si el string está vacío.

```c
int ft_str_is_alpha(char *str);
```

---

### ✏️ Ejercicio 03 — `ft_str_is_numeric`

| | |
|---|---|
| 📁 Directorio | `ex03/` |
| 📄 Archivo | `ft_str_is_numeric.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el string contiene **únicamente** dígitos, `0` en caso contrario. Devuelve `1` si el string está vacío.

```c
int ft_str_is_numeric(char *str);
```

---

### ✏️ Ejercicio 04 — `ft_str_is_lowercase`

| | |
|---|---|
| 📁 Directorio | `ex04/` |
| 📄 Archivo | `ft_str_is_lowercase.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el string contiene **únicamente** caracteres alfabéticos en **minúsculas**, `0` en caso contrario. Devuelve `1` si el string está vacío.

```c
int ft_str_is_lowercase(char *str);
```

---

### ✏️ Ejercicio 05 — `ft_str_is_uppercase`

| | |
|---|---|
| 📁 Directorio | `ex05/` |
| 📄 Archivo | `ft_str_is_uppercase.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el string contiene **únicamente** caracteres alfabéticos en **mayúsculas**, `0` en caso contrario. Devuelve `1` si el string está vacío.

```c
int ft_str_is_uppercase(char *str);
```

---

### ✏️ Ejercicio 06 — `ft_str_is_printable`

| | |
|---|---|
| 📁 Directorio | `ex06/` |
| 📄 Archivo | `ft_str_is_printable.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el string contiene **únicamente** caracteres imprimibles, `0` en caso contrario. Devuelve `1` si el string está vacío.

```c
int ft_str_is_printable(char *str);
```

---

### ✏️ Ejercicio 07 — `ft_strupcase`

| | |
|---|---|
| 📁 Directorio | `ex07/` |
| 📄 Archivo | `ft_strupcase.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Convierte cada letra del string a **mayúsculas**. Debe devolver `str`.

```c
char *ft_strupcase(char *str);
```

---

### ✏️ Ejercicio 08 — `ft_strlowcase`

| | |
|---|---|
| 📁 Directorio | `ex08/` |
| 📄 Archivo | `ft_strlowcase.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Convierte cada letra del string a **minúsculas**. Debe devolver `str`.

```c
char *ft_strlowcase(char *str);
```

---

### ✏️ Ejercicio 09 — `ft_strcapitalize`

| | |
|---|---|
| 📁 Directorio | `ex09/` |
| 📄 Archivo | `ft_strcapitalize.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Pone en **mayúscula la primera letra** de cada palabra y el resto en minúsculas. Una "palabra" es una secuencia de caracteres **alfanuméricos**. Debe devolver `str`.

```c
char *ft_strcapitalize(char *str);
```

**Ejemplo:**
```
"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"
→ "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
```

---

### ✏️ Ejercicio 10 — `ft_strlcpy`

| | |
|---|---|
| 📁 Directorio | `ex10/` |
| 📄 Archivo | `ft_strlcpy.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Reproduce el comportamiento de la función `strlcpy` (`man strlcpy`).

```c
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
```

---

### ✏️ Ejercicio 11 — `ft_putstr_non_printable`

| | |
|---|---|
| 📁 Directorio | `ex11/` |
| 📄 Archivo | `ft_putstr_non_printable.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra una cadena de caracteres. Los caracteres **no imprimibles** se muestran en **hexadecimal en minúsculas** precedidos de una barra invertida `\`.

```c
void ft_putstr_non_printable(char *str);
```

**Ejemplo:** `"Coucou\ntu vas bien ?"` → `"Coucou\0atu vas bien ?"`

---

### ✏️ Ejercicio 12 — `ft_print_memory`

| | |
|---|---|
| 📁 Directorio | `ex12/` |
| 📄 Archivo | `ft_print_memory.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra una región de memoria en tres columnas separadas por espacio:
- 📍 **Dirección** en hexadecimal seguida de `:`
- 🔢 **Contenido** en hexadecimal (espacio cada 2 chars, completado con espacios si es necesario)
- 🔤 **Contenido** en caracteres imprimibles (los no imprimibles se sustituyen por `.`)

Cada línea contiene **16 caracteres**. Si `size` es `0`, no se muestra nada. Debe devolver `addr`.

```c
void *ft_print_memory(void *addr, unsigned int size);
```

---

## 📦 Entrega

Entrega tu proyecto en tu **repositorio Git**. Solo se evaluará el trabajo del repositorio. Verifica los nombres de los archivos antes de hacer push. 🚀
