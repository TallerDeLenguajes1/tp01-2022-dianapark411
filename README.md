# tp12022 

#### Diana Park

## *Desarrollo Punto 2, b del ejercicio 2*

Es conveniente incluir .gitignore para evitar agregar accidentalmente ciertos archivos ya sea por que son archivos caches, ocultos, privados, o muy pesados por ejemplo. 

El archivo .gitignore se configura de la siguiente forma:
- Usando “#” para agregar comentarios a un archivo .gitignore
- Usando “*” para una coincidencia de comodines
- Usando #/” para ignorar las rutas relativas al archivo GITIGNORE



Entiendo que esta pregunta (Incluya en su repositorio una regla de cómo ignorar un archivo ignorado.txt) se refiere al paso a paso para ignorar un archivo. 

Primero creamos un archivo llamado .gitignore, alli se escribirán todos los archivos, rutas que se quieran ignorar(se copia lo generado por gitignore.io para vs code en C). 

Luego escribimos en ese archivo "ignorado.txt" de modo que tambien se lo ignore, puede ser abriendo Vs code y poniendolo alli directamente o haciendo un echo "ignorado.txt" >> .gitignore 

Posteriormente en git escribimos: git add .gitignore y luego commiteamos los cambios (git commit -m "bla bla bla")

Y fin