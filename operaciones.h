namespace Matematicas {
    int suma(int a, int b); {
        return a+b;
    }

    int resta(int a, int b); {
        return a-b;
    }

    int multiplicacion(int a, int b); {
        return a*b;
    }

    int division(int a, int b); {
        return a/b;
    }
    
    int potencia(int a, int b); {
        int resultado = 1;
        for (int i = 0; i < b; i++) {
            resultado *= a;
        }
        return resultado;
    }
}