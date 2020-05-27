ejecutarKernels(struct Task** K_run){
	int i
	int id;
	for ( i = 0; i < Krun.len(); i++){ 
		id = Krun[i]->id;
		switch (id){
			case A:
				continuar_ejeA = true;
				break;

			. . .

			case N:
				continuar_ejeAN = true;
				break;
			default:
				break;
		}
	}
}