#Bloque busca espacio en baja prioridad{
	
	else if(Existe tarea de baja prioridad con misma cantidad warps)
		//Siempre se pregunta de menor a mayor prioridad
		SMn.colocaEnPosicion(r[i]);

	else if(Existe tarea de baja prioridad con cantidad mayor de warps)
		//Se prefiere siempre la más cercana en warps
		SMn.colocaEnPosicion(r[i]);

	else if(Existen tareas de baja prioridad vecinas que sumadas tengan mayor o 
														igual cantidad de warps)
	SMn.colocaEnPosicion(r[i]);
}

#Bloque busca espacio en media prioridad{

	else if(Existe tarea de mediana prioridad con misma cantidad warps)
		//Siempre se pregunta por las de menor priodidad que la tarea en cuestión
		SMn.colocaEnPosicion(r[i]);

	else if(Existe tarea de mediana prioridad con cantidad mayor de warps)
		//Se prefiere siempre la más cercana en warps
		SMn.colocaEnPosicion(r[i]);

	else if(Existe tarea de media prioridad vecina de una tarea de baja prioridad 
								que sumadas tengan mayor o igual cantidad de warps)
	SMn.colocaEnPosicion(r[i]);
}