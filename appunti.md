


# Programmazione in C

La prima cosa che dobbiamo fare per programmare in C è installare un _compilatore_, ovvero un programma che prende il nostro file in c e lo traduce in linguaggio macchina che la CPU può eseguire.

Prima verifica la sintassi, lo ottimizza, e poi crea un file eseguibile .exe

per linux possiamo installare il compilatore _GCC_ GNU Compiler Collection con il seguente comando:

```bash
sudo apt update && sudo apt install build-essential
```


poi possiamo creare un file in c, ad esempio _example.c_

e poi possiamo eseguirlo con il seguente comando


```bash
gcc example.c -o hello
```

- gcc: È il compilatore che abbiamo installato.

- hello.c: È il nome del tuo file sorgente (l'input).

- -o hello: È un'opzione che significa "output". Stai dicendo a GCC di creare un file eseguibile chiamato hello (l'output). Se ometti questa parte, creerà un file chiamato a.out per default.








