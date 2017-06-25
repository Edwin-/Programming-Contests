/******************************************************************************
 * Date : 00/00/2017
 * Autor : Edwin Payrumani Mamani
 * Judge: 
 * Problem:
 *****************************************************************************/

import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.SortedSet;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.TreeSet;
import java.io.FileNotFoundException;
import java.util.StringTokenizer;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.InputStream;

public class template {

    static final double EPS = 1.e-10;

    private static int cmp(double x, double y = 0, double tol = EPS) {
        return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1; 
    }

    public static void main(String[] args) {

        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        FastScanner in = new FastScanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Problem solver = new Problem();
        solver.solve(1, in, out);
        out.close();
    }

    static class Problem {

        public void solve(int testNumber, FastScanner in, PrintWriter out) {
                       
        }

    }

    static class FastScanner {
        public BufferedReader br;
        public StringTokenizer st;
        
        public FastScanner(InputStream is) {
            br = new BufferedReader(new InputStreamReader(is));
        }

        public FastScanner(String file) {
            try {
                br = new BufferedReader(new FileReader(file));
            } catch (FileNotFoundException e) {
                e.printStackTrace();
            }
        }

        public String next() {
            try {
                while (st == null || !st.hasMoreTokens()) {
                    st = new StringTokenizer(br.readLine());
                }
            } catch (IOException e) {
                System.err.println(e);
                System.exit(1);
            }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

        public double nextDouble() {
          return Double.parseDouble(next());
        }
    
    }
}   
