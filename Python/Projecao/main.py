#Função Projeção Ponto-Circunferência
import numpy as np
from testar import plotPonto 

def projPontoCircunferencia(x, y, raio, c1, c2):
  distancia = np.sqrt((c1-x)**2 + (c2-y)**2)
  x_proj = x
  y_proj = y

  if distancia <= raio:
    x_proj = raio * (1-np.cos(distancia/raio))
    y_proj = raio * np.sin(distancia/raio)

  plotPonto(x_proj, y_proj)
  return x_proj, y_proj

x1 = float(input())
y1 = float(input())
raio = float(input())
c1 = float(input())
c2 = float(input())

print(projPontoCircunferencia(x1, y1, raio, c1, c2))