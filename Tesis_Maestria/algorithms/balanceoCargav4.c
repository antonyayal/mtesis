balanceoCarga(r){
	SM0[]=//Arreglo de tareas balanceadas en SM0
	SM1[]=//Arreglo de tareas balanceadas en SM1 
	. . .
	SMn[]=//Arreglo de tareas balanceadas en SMn 

	rn=tareasEnRango(r);//Obtiene tareas en rango

	//Balancea carga en los SM
	for(i=0;i<r.length;i++){
		//Mientras tarea no exista dentro de los SM
		while(!SM0.contiene(r[i]) && !SM1.contiene(r[i]) ... 
								&& !SMn.contiene(r[i])){

			if(Hay warps disponibles para su ejecución)
				SMn.colocaEnPosicion(r[i]);

			else if(Tarea en rago de alta prioridad){
				#Bloque busca espacio en baja prioridad
				#Bloque busca espacio en media prioridad
			}
			else if(Tarea en rago de media prioridad){
				#Bloque busca espacio en baja prioridad
			}
			
			else
				#No se ejecuta en este quantum
		}
	}
}
