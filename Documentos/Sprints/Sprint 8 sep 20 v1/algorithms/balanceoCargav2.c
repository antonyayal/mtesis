balanceoCarga(r){
	SM0[]=//Arreglo de tareas balanceadas en SM0
	SM1[]=//Arreglo de tareas balanceadas en SM1 
	. . .
	SMn[]=//Arreglo de tareas balanceadas en SMn 

	eliminaTareasFueraDeRango();

	for(i=0;i<r.length;i++){
		#Tarea mayor prioridad
		if(i==0)
			while(!SM0.contiene(r[0]) && !SM1.contiene(r[0]) ... 
									&& !SMn.contiene(r[0])){
				if(SM0.warpsDisponibles(r[0]))
					SM0.colocaEnPosicion(r[0]);
				else if(SM1.warpsDisponibles(r[0]))
					SM1.colocaEnPosicion(r[0]);
				. . .
				else if(SMn.warpsDisponibles(r[0]))
					SMn.colocaEnPosicion(r[0]);
				else
					//Tarea menor prioridad a primera
					eliminaTareaMenorPrioridadEnSM(1);
			}
		else if(i==1){
			while(!SM0.contiene(r[1]) && !SM1.contiene(r[1]) ... 
									&& !SMn.contiene(r[1])){
				if(SM0.warpsDisponibles(r[1]))
					SM0.colocaEnPosicion(r[1]);
				else if(SM1.warpsDisponibles(r[1]))
					SM1.colocaEnPosicion(r[1]);
				. . .
				else if(SMn.warpsDisponibles(r[1]))
					SMn.colocaEnPosicion(r[1]);
				else
					//Tarea menor prioridad a segunda
					eliminaTareaMenorPrioridadEnSM(1);
			}
		}
		else{
			if(SM0.warpsDisponibles(r[i]))
					SM0.colocaEnPosicion(r[i]);
				else if(SM1.warpsDisponibles(r[i]))
					SM1.colocaEnPosicion(r[i]);
				. . .
				else if(SMn.warpsDisponibles(r[i]))
					SMn.colocaEnPosicion(r[i]);
		}
}