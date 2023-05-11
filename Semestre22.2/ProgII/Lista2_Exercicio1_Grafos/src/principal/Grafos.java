package principal;

import java.util.*;

public class Grafos {
	
    List<Vertice> vertices;
    List<Aresta> arestas;

    public Grafos() {
    	
        vertices = new ArrayList<Vertice>();
        arestas = new ArrayList<Aresta>();
        
    }

    Vertice addVertice(String nome) {
    	
        Vertice v = new Vertice(nome);
        vertices.add(v);
        return v;
        
    }

    Aresta addAresta(Vertice origem, Vertice destino) {
    	
        Aresta a = new Aresta(origem, destino);
        origem.addAdj(a);
        arestas.add(a);
        return a;
        
    }

    public String toString() {
    	
        String r = "";
        for (Vertice u : vertices) {
            r += u.nome + " -> ";
            for (Aresta e : u.adj) {
                Vertice v = e.destino;
                r += v.nome + ", ";
            }
            r += "\n";
        }
        
        return r;
    }

    public static void main(String[] args) {
    	
        Grafos g = new Grafos();
        
        Vertice a = g.addVertice("1");
        Vertice b = g.addVertice("2");
        Vertice c = g.addVertice("3");
        Vertice d = g.addVertice("4");
        Vertice e = g.addVertice("5");
        
        Aresta ab = g.addAresta(a, b);
        Aresta ae = g.addAresta(a, e);
        Aresta ba = g.addAresta(b, a);
        Aresta be = g.addAresta(b, e);
        Aresta cb = g.addAresta(c, b);
        Aresta cd = g.addAresta(c, d);
        Aresta db = g.addAresta(d, b);
        Aresta de = g.addAresta(d, e);
        Aresta dc = g.addAresta(d, c);
        Aresta ed = g.addAresta(e, d);
        Aresta ea = g.addAresta(e, a);
        Aresta eb = g.addAresta(e, b);
        
        System.out.println(g);
        
    }

	
	
}
