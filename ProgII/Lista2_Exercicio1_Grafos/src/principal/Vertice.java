package principal;

import java.util.ArrayList;
import java.util.List;

public class Vertice {
	
    String nome;
    List<Aresta> adj;

    public Vertice(String nome) {
        this.nome = nome;
        this.adj = new ArrayList<Aresta>();
    }

    public void addAdj(Aresta a) {
        adj.add(a);
    }

}
