# Gestión logística hospitalaria
Este proyecto está hecho para optimizar los procesos de logística de un hospital, de modo que se pueda llevar un registro de pacientes con el mes, fecha y hora de su cita, así como utilizar comandos útiles como mostrar los registros existentes, buscar pacientes, y desplegar la información del hospital.

# Contexto
El hospital que use el programa puede ser público o privado, y se puede llevar un registro de los pacientes que acuden a sacar citas en el hospital, de esta manera la información se encuntra encriptada pero disponible para todo el personal del hospital.

# Funcionalidad
El programa comienza dando la bienvenida al usuario que accede a el, a partir de aquí despliega un menú con las opciones disponibles: agregar usuario, buscar usuario, imprimir registro de usuarios e imprimir información del hospital.

# Consideraciones
El programa solo corre en la consola y esta hecho con C++ standard por lo que corre en todos los sistemas operativos.
Se compila con: "g++ main.cpp"
Correr en linux: "/a.out"
Correr en windows: "a.exe"

# Correcciones
Desde la primera entrega se realizaron las siguientes correcciones:
1. Se agregó estilo en todas las bibliotecas y en el main
2. Se agregaron 5 casos de prueba
3. Se agregó herencia entre Hospital y HospitalPrivado
4. Se agregó Usuario como componente de Hospital
5. Se corrigieron errores de funcionamiento y se completó el código de las opciones del menú
