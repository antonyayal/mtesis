. . .

//Declaración del backup
Backup backup;
//Duración máxima del quantum en microsegundos
int quantum_time = #Duración del quantum
//
bool quantum_expirado;
bool kernel_completado = false;


/* Ejecución del kernel */
while(!kernel_completado){
	quantum_expirado = false;

	planificador.puede

	kernelFunction<<<blockDim,gridDim >>>(a, ... , resultados,     	    									backup,quantum_expirado);
	/*Espera el tiempo del quantum */
	usleep(quantum_time);
	quantum_expirado = true;
	cudaDeviceSynchronize();

	kernel_completado=kc(backup.estado, &gridDim);

}

. . .