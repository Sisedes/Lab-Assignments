#include <stdio.h>
#include <stdlib.h>

#define dugum 6 // Toplam düðüm sayýsý

int minUzaklik(int mesafe[], int kisa[]) {
    int min = INT_MAX, min_index;
  int i=0;
  int boyut=dugum;
    for (i = 0; i < boyut; i++)
       {
		 if (kisa[i] == 0 && mesafe[i] <= min)
            {
            	min = mesafe[i], min_index = i;
			}
       }
    return min_index;
}

void EkranaYazdir(int mesafe[]) {
    printf("Dugum   Mesafe\n");
    int i=0;
    int boyut=dugum;
    for (i = 0; i < boyut; i++)
       {printf("%d \t %d\n", i, mesafe[i]);}
}

void dijkstra(int graph[dugum][dugum], int hehe) {
    int mesafe[dugum];
    int kisa[dugum];
    int i=0;
    for (i = 0; i < dugum; i++)
        {
        	mesafe[i] = INT_MAX, kisa[i] = 0;
		}

    mesafe[hehe] = 0;
    int j=0;
    for (j = 0; j < dugum-1; j++) {
        int u = minUzaklik(mesafe, kisa);
        kisa[u] = 1;
        int q=0;
        for (q = 0; q < dugum; q++)
            if (!kisa[q] && graph[u][q] && mesafe[u] != INT_MAX && mesafe[u]+graph[u][q] < mesafe[q])
               {
			   mesafe[q] = mesafe[u] + graph[u][q];
				} 
    }

    EkranaYazdir(mesafe);
}

int main() {
	int boyut=dugum;
	int graph[dugum][dugum] ={{0, 4, 2, 0, 0, 0, 0},
                           {4, 0, 0, 3, 1, 0, 0},
                           {2, 0, 0, 0, 0, 2, 0},
                           {0, 3, 0, 0, 2, 0, 6},
                           {0, 1, 0, 2, 0, 2, 3},
                           {0, 0, 2, 0, 2, 0, 0}};


    dijkstra(graph, 2);
    
    return 0;
}

