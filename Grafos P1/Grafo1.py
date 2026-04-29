import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()

G.add_nodes_from(['joão', 'paulo', 'maria', 'joana', 'antonia', 'lili', 'raimundo'])

G.add_edges_from([('joão', 'joao'),('paulo', 'maria'),('paulo', 'joana'), ('paulo', 'antonia'), ('paulo', 'lili'), ('maria', 'joana'), ('joana', 'antonia'), ('antonia', 'lili')])

print(f"nos do grafo : {G.nodes()}")
print(f"arestas do grafo : {G.edges()}")
print(f"contando num nós : {G.number_of_nodes()}")
print(f"contando num arestas : {G.number_of_edges()}")

pos = nx.spring_layout(G, seed=42)

nx.draw(G, pos, with_labels= True, node_color='lightblue',
        font_weight='bold', node_size=700, font_size=10)
plit.title('Representação em grafos simples')
plit.show()
