#ifndef SD_MODULE_H
#define SD_MODULE_H

#include <Arduino.h>
#include <FS.h>
#include <SD.h>
#include <SPI.h>

// Inicializa la tarjeta SD usando VSPI y la configuración establecida.
bool initSDModule();

// Escribe el contenido dado en el archivo especificado.
bool writeFileSD(const char* path, const char* data);

// Lee y retorna el contenido del archivo especificado.
String readFileSD(const char* path);

// Crea o reinicia (vacía) un fichero.
bool createFileSD(const char* path);

// Guarda (añade) diferentes datos en el fichero especificado.
bool appendDataSD(const char* path, const char* data);

// Guarda datos en formato CSV en el archivo especificado.
bool appendDataCSV(const char* path, const char* data);

// Declaración de la función para detectar interrupción por teclado.
void handleKeyboardInterrupt();

// NUEVA: Consulta si el sistema está pausado
bool isSystemPaused();

// NUEVA: Consulta si el sistema está terminado
bool isSystemTerminated();

#endif
