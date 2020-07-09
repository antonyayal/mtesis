    . . .
	
	/* Fase de inicialización */
	switch(backup.estado[id_block]){
		case INICIO:
			//Inicialización de variables locales
			temp1 = 0;
			temp2 = 0;
			. . .
			tempn = 0;

			//Inicialización de contadores
			i = 0;
			j = 0;
			. . .
			i = 0;
			break;
		case EJECUCION:
			//Inicialización de variables con respecto al backup
			temp1 = backup->temp1[id_block * blockDim.x + id_thread];
			temp2 = backup->temp2[id_block * blockDim.x + id_thread];
			. . .
			temp3 = backup->tempn[id_block * blockDim.x + id_thread];

			//Inicialización de contadores con respecto al backup
			i = backup->i[id_block];
			j = backup->j[id_block];
			. . .
			k = backup->k[id_block];
			break;
		case TERMINADO:
			break;
	}
	. . .