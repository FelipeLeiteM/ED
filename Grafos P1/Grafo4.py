import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()

G.add_nodes_from(['Elvis', 'fa1', 'fa2', 'fa3', 'nfa'])

G.add_edges_from([('fa1', 'Elvis'),
                  ('fa2', 'Elvis'),
                  ('fa3', 'Elvis'),])

print(f"nos do grafo : {G.nodes()}")
print(f"arestas do grafo : {G.edges()}")

pos = nx.spring_layout(G, seed=42)

nx.draw(G, pos, with_labels= True, node_color='red', node_size=2000, font_color='white', font_size=7, arrowsize=15)
plit.title('Representação em grafos simples')
plit.show()
