int informar_ConsultaFacturacion(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas, char* cuit);
int informar_ListarContrataciones(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas);


int informar_ListarCantidadContratacionesImporte(Contratacion* arrayC,int limite,
              Pantalla* pantallas, int lenPantallas);

void ordenarPorPrecio(Pantalla* pPantalla,int limite);
void ordenarPorNombre(Pantalla* pPantalla,int limite);
int informar_ListarPantallas(Pantalla* array,int limite);
int pantalla_ordenarPrecioNombre(Pantalla* array,int limite);
