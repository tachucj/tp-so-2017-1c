
#ifndef LOGGER_H_
#define LOGGER_H_

#include <stdio.h>
#include <stdlib.h>
#include <commons/log.h>
#include <commons/string.h>
#include <commons/log.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

t_log *errorLog;
t_log *debugLog;
t_log *warningLog;
t_log *infoLog;
t_log *traceLog;

void crearLog(char* nombreLog, char* nombreProceso, int muestraPantalla);
void desactivarLogs();
void reactivarLogs();
void destruirLogs();


#endif /* LOGGER_H_ */
