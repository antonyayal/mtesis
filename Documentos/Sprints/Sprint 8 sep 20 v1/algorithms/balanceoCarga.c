balanceoCarga(r){
SM0[]=//Arreglo de tareas balanceadas en SM0
SM1[]=//Arreglo de tareas balanceadas en SM1 
. . .
SMn[]=//Arreglo de tareas balanceadas en SMn 
	for(i=0;i<r.length;i++){
	#Mantiene en ejecución tareas en rango	
		if(!r[i].enRango()){
			if(SM0.contiene(r[i]))
				SM0.remove(r[i])
			if(SM1.contiene(r[i]))
				SM1.remove(r[i])
			. . .

			if(SMn.contiene(r[i]))
				SMn.remove(r[i])
		}
	#Tarea mayor prioridad
		if(!SM0.contiene(r[0]) && !SM1.contiene(r[0]) ... 
								&&!SMn.contiene(r[0])){
			//if Cabe en cola de SM0?
				//Coloca r0
			//else if Cabe en cola de SM1
				//Coloca r1
			. . .
			//else if Cabe en cola de SMn
				//Coloca rn
			//else quita tarea con menor prioridad en ejecución
		}
	#Tarea segunda mayor prioridad
			if(!SM0.contiene(r[1]) && !SM1.contiene(r[1]) ... 
									&&!SMn.contiene(r[1])){
			//if Cabe en cola de SM0?
				//Coloca r0
			//else if Cabe en cola de SM1
				//Coloca r1
			. . .
			//else if Cabe en cola de SMn
				//Coloca rn
			//else quita tarea con menor prioridad en ejecución
		}
	}
	
}