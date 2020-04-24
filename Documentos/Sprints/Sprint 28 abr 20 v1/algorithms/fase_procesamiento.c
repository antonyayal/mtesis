. . .

	/* Fase de procesamiento*/
	switch(backup.estado[id_block]){
		case INICIO:
			if(id_thread == 0)
				backup->estado[id_block] = EJECUCION;
			_syncthreads(); // Todos esperan a que se modifique el estado
			// No hay break para que continue al siguiente caso
		case EJECUCION:
			//Ejecución del kernel
			do { 
				//Procesa 
				resultados = #paso_de_procesamiento;
			} while(!quantum_expirado && !block_completo); 

			/* Si se realizó la ejecución completamente */
			if(block_completo){
				if(id_thread == 0)
					backup->estado[id_block] = TERMINADO;
				break;
			}
			_syncthreads();//TB sincronizan para llegar al mismo valor de contador
			
            /* Si ya expiró el quantum almacena contexto en backup */
			//Variables locales
			backup->temp1[id_block * blockDim.x + id_thread] = temp1;
			backup->temp2[id_block * blockDim.x + id_thread] = temp2;
			. . .
			backup->tempn[id_block * blockDim.x + id_thread] = tempn;
			//Contador 
			if(id_thread == 0){
				backup->i[id_block]=i;
				backup->j[id_block]=j;
				backup->k[id_block]=k;
			}
			break;
		case TERMINADO:
			break;
	}

. . .