. . .

//Declaración del backup
Backup backup;
//Duración máxima del quantum en microsegundos
int quantum_time = #Duración del quantum
//
bool quantum_expirado = false;
bool kernel_completado = false;


/* Ejecución del kernel */
while(!kernel_completado){
	kernelFunction<<<blockDim,gridDim >>>(a,.., resultados,     	    									backup,quantum_expirado);
	/*Espera el tiempo del quantum */
	usleep(quantum_time);
	quantum_expirado = true;
	cudaDeviceSynchronize();

	kernel_completado=kc(backup.estado, &gridDim);

	/* Si aun no están completos todos los block */
	if(!kernel_completado){
		quantum_expirado = false;
	}
}

. . .