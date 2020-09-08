balanceoCarga(r){
	SM0[]=//Arreglo de tareas balanceadas en SM0
	SM1[]=//Arreglo de tareas balanceadas en SM1 
	. . .
	SMn[]=//Arreglo de tareas balanceadas en SMn 

	//Elimina tareas fuera de rango
	for(i=0;i<r.length;i++){
		//Se elimina tarea fuera de rango existe en SM
		if(!r[i].enRango()){
			if(SM0.contiene(r[i]))
				SM0.remove(r[i])
			if(SM1.contiene(r[i]))
				SM1.remove(r[i])
			. . .
			if(SMn.contiene(r[i]))
				SMn.remove(r[i])
	}

	//Balancea carga en los SM
	for(i=0;i<r.length;i++){
		//Mientras tarea no exista dentro de los SM
		while(!SM0.contiene(r[i]) && !SM1.contiene(r[i]) ... 
								&& !SMn.contiene(r[i])){
			if(SM0.warpsDisponibles(r[i]))
				SM0.colocaEnPosicion(r[i]);
			else if(SM1.warpsDisponibles(r[i]))
				SM1.colocaEnPosicion(r[i]);
			. . .

			else if(SMn.warpsDisponibles(r[i]))
				SMn.colocaEnPosicion(r[i]);
			else{
				if(i==0) //Tarea menor prioridad a primera
					eliminaTareaMenorPrioridadEnSM(1);
				else if(i==1) //Tarea menor prioridad a segunda
					eliminaTareaMenorPrioridadEnSM(2);
				else //Si no hay lugar, se omite
					break;
			}
		}
	}
}	