# ParckSistem
Este código en C++ representa un programa para gestionar las actividades y reservas de un parque recreativo. El programa permite realizar las siguientes operaciones:

Agregar actividad: Permite agregar una nueva actividad al parque. Se solicita al usuario ingresar el nombre de la actividad y la capacidad máxima de personas que pueden participar en ella.

Realizar reserva: Permite realizar una reserva para una actividad específica. El usuario debe ingresar su nombre, el nombre de la actividad que desea reservar y el número de personas que participarán. Si hay suficientes cupos disponibles en la actividad, se registra la reserva y se disminuye el número de cupos disponibles.

Mostrar actividades disponibles: Muestra en pantalla todas las actividades disponibles en el parque, junto con el número de cupos disponibles para cada una.

Mostrar reservas: Muestra en pantalla todas las reservas realizadas, mostrando el nombre del visitante, el nombre de la actividad reservada y el número de personas en la reserva.

Salir: Termina la ejecución del programa.

El programa utiliza un map llamado actividades para almacenar las actividades del parque, donde la clave es el nombre de la actividad y el valor es un objeto de la estructura Actividad, que contiene información sobre la capacidad y cupos disponibles.

Las reservas se almacenan en un vector llamado reservas, donde cada elemento es un objeto de la clase Reserva, que representa una reserva específica y contiene el nombre del visitante, el nombre de la actividad reservada y el número de personas.

El programa utiliza un bucle do-while para mostrar un menú al usuario y realizar la operación seleccionada hasta que el usuario elija la opción "5" para salir del programa.

En resumen, el programa permite a los usuarios gestionar las actividades y reservas de un parque recreativo y mantener un registro de las reservas realizadas.
