El código que proporcionaste ha implementado las funciones `insertarRegistro()` y `leerRegistros()` para permitir al usuario agregar nuevos registros y listar los registros almacenados en el archivo "agenda.txt" respectivamente. Aquí está el análisis del código actualizado:

1. **Función `insertarRegistro()`**:
   - Permite al usuario ingresar un nuevo registro con información de nombre, email y teléfono.
   - Abre el archivo "agenda.txt" en modo de escritura (`"a"` para añadir al final del archivo).
   - Usa `fprintf()` para escribir la información del nuevo registro en el archivo en un formato específico (`"%s,%s,%s\n"`).
   - Cierra el archivo después de escribir el registro usando `fclose()`.

2. **Función `leerRegistros()`**:
   - Lee y muestra los registros almacenados en el archivo "agenda.txt".
   - Abre el archivo "agenda.txt" en modo de lectura (`"r"`).
   - Utiliza `fgets()` para leer cada línea del archivo y luego muestra cada línea en la consola usando `puts()`.
   - Finalmente, cierra el archivo con `fclose()`.

3. **Función `menu()`**:
   - Muestra el menú con las opciones para insertar un nuevo registro, listar registros o salir del programa.
   - Dependiendo de la opción elegida por el usuario, se llama a la función correspondiente (`insertarRegistro()`, `leerRegistros()` o `exit()`).

Este código proporciona las funcionalidades básicas para gestionar una agenda, permitiendo agregar nuevos registros y ver los registros existentes. Si hay más funcionalidades específicas que te gustaría añadir o si necesitas ayuda adicional, no dudes en preguntar. Estoy aquí para asistirte.