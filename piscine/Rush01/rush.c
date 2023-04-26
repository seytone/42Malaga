#include <stdio.h>
#include <unistd.h>

// Configuración inicial de matriz
int ft_setup(char *arg, int matriz[][6])
{
    int x = 0;
    int y = 0;

    // Rellena toda la matriz con espacios vácios
    while (x < 6)
    {
        y = 0;
        while(y < 6)
        {
            matriz[x][y] = 0;
            y++;
        }
        x++;
    }

    // Rellena el perímetro con los parámetros recibidos como argumentos de la función

    // Rellena fila superior
    matriz[0][1] = arg[0] - '0';
    matriz[0][2] = arg[2] - '0';
    matriz[0][3] = arg[4] - '0';
    matriz[0][4] = arg[6] - '0';
    // Rellena fila inferior
    matriz[5][1] = arg[8] - '0';
    matriz[5][2] = arg[10] - '0';
    matriz[5][3] = arg[12] - '0';
    matriz[5][4] = arg[14] - '0';
    // Rellena columna izquierda
    matriz[1][0] = arg[16] - '0';
    matriz[2][0] = arg[18] - '0';
    matriz[3][0] = arg[20] - '0';
    matriz[4][0] = arg[22] - '0';
    // Rellena columna derecha   
    matriz[1][5] = arg[24] - '0';
    matriz[2][5] = arg[26] - '0';
    matriz[3][5] = arg[28] - '0';
    matriz[4][5] = arg[30] - '0';

}

// Imprime la matriz para mostrala como salida
int ft_print(int matriz[][6])
{
    int x = 0;
    int y = 0;
    while (x < 6)
    {
        y = 0;
        while (y < 6)
        {
            printf("%d ", matriz[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }
    
}

void ft_prefill(int matriz[][6])
{
    int x = 0;
    int y = 0;

    while (x < 6)
    {
        y = 0;
        while(y < 6)
        {
            if(matriz[x][y] == 4)
            {
                if (x == 0)
                {
                    matriz[1][y] = 1;
                    matriz[2][y] = 2;
                    matriz[3][y] = 3;
                    matriz[4][y] = 4;
                }
                if (x == 5)
                {
                    matriz[4][y] = 1;
                    matriz[3][y] = 2;
                    matriz[2][y] = 3;
                    matriz[1][y] = 4;
                }
                if (y == 0)
                {
                    matriz[x][1] = 1;
                    matriz[x][2] = 2;
                    matriz[x][3] = 3;
                    matriz[x][4] = 4;
                }
                if (y == 5)
                {
                    matriz[x][4] = 1;
                    matriz[x][3] = 2;
                    matriz[x][2] = 3;
                    matriz[x][1] = 4;
                }
            }

            if(matriz[x][y] == 1)
            {
                if (x == 0)
                {
                    matriz[1][y] = 4;
                }
                if (x == 5)
                {
                    matriz[4][y] = 4;
                }
                if (y == 0)
                {
                    matriz[x][1] = 4;
                }
                if (y == 5)
                {
                    matriz[x][4] = 4;
                }
            }
            if(matriz[x][y] == 2)
            {
                if (x == 0 && matriz[5][y] == 3)
                {
                    matriz[1][y] = 1;
                    matriz[2][y] = 4;
                    matriz[3][y] = 3;
                    matriz[4][y] = 2;
                }
                if (x == 5 && matriz[0][y] == 3)
                {
                    matriz[4][y] = 1;
                    matriz[3][y] = 4;
                    matriz[2][y] = 3;
                    matriz[1][y] = 2;
                }
                if (y == 0 && matriz[x][5] == 3)
                {
                    matriz[x][1] = 1;
                    matriz[x][2] = 4;
                    matriz[x][3] = 3;
                    matriz[x][4] = 2;
                }
                if (y == 5 && matriz[x][0] == 3)
                {
                    matriz[x][4] = 1;
                    matriz[x][3] = 4;
                    matriz[x][2] = 3;
                    matriz[x][1] = 2;
                }
            }
            y++;
        }
        x++;
    }
    
}



int verify(int matriz[][6], int x, int y, int value)
{
    int ret = 1;
    int aux = 1;
    
    while (aux < 5 && ret == 1)
    {
        if (matriz[aux][y] == value || matriz[x][aux] == value)
            ret = 0;
        aux++;
    }

    return ret;
}

int ft_fill(int matriz[][6])
{
    int x = 1;
    int y = 1;
    int aux;
    int temp;

    while (x < 5)
    {
        y = 1;
        while(y < 5)
        {
            if(matriz[x][y] == 0)
            {
                temp = 0;
                aux = 1;
                while(aux < 5 && temp == 0)
                {
                    if (verify(matriz, x, y, aux) == 1){
                        matriz[x][y] = aux;
                        temp = 1;
                    }
                    aux++;
                }
            }
            y++;
        }
        x++;
    }
}

int main(int argc, char *argv[])
{
    int tru = 1;
    int matriz[6][6];

    ft_setup(argv[1], matriz);
    ft_prefill(matriz);
   
    ft_fill(matriz);
    ft_print(matriz);
    return (0);
}