package PROJ_CRUD;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import javax.swing.JOptionPane;

public class KoneksiDB {
    public static Connection koneksi;
    public static Connection konfigDB()throws SQLException{
        try{
            String url="jdbc:mysql://localhost/db_pbo_p12"; //url database
            String user="root"; //user database
            String pass=""; //password database
            DriverManager.registerDriver(new com.mysql.cj.jdbc.Driver());
            koneksi=DriverManager.getConnection(url, user, pass);
            //JOptionPane.showMessageDialog(null, "Berhasil Koneksi");
        } catch(Exception e){
           JOptionPane.showMessageDialog(null, "Gagal Koneksi");
           //System.err.println("koneksi gagal "+e.getMessage()); //perintah menampilkan error pada koneksi
        }
        
        return koneksi;
    }
   
   public static void main(String args[]) throws SQLException {
   
       java.sql.Connection c = (Connection)KoneksiDB.konfigDB(); //memanggil fungsi koneksi dikelas lainnya
   }
}

