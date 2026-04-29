import networkx as nx
import matplotlib.pyplot as plt

G = nx.DiGraph()

G.add_nodes_from(['prince', 'david', 'madona', 'lady', 'michael', 'beyonce', 'kenye', 'rihana', 'jay'])

G.add_edges_from([('prince', 'michael'),
                  ('david', 'madona'),('david', 'prince'),
                  ('madona', 'lady'),
                  ('michael', 'beyonce'),
                  ('beyonce', 'rihana'),
                  ('kenye', 'rihana'),
                  ('jay', 'rihana'), ('jay', 'kenye')])

print(f"nos do grafo : {G.nodes()}")
print(f"arestas do grafo : {G.edges()}")

pos = nx.spring_layout(G, seed=42)

nx.draw(G, pos, with_labels= True, node_color='red', node_size=2000, font_color='white', font_size=7, arrowsize=15)
plit.title('Representação em grafos simples')
plit.show()
