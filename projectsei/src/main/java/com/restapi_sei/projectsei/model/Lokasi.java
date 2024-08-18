package com.restapi_sei.projectsei.model;

import jakarta.persistence.*;
import java.sql.Timestamp;

@Entity
public class Lokasi {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)  // ID ini akan otomatis bertambah.
    private Integer id;

    @Column(name = "nama_lokasi", nullable = false)  // Mengatur nama kolom dan memastikan tidak null.
    private String namaLokasi;

    @Column(name = "negara", nullable = false)
    private String negara;

    @Column(name = "provinsi", nullable = false)
    private String provinsi;

    @Column(name = "kota", nullable = false)
    private String kota;

    @Column(name = "created_at", nullable = false)
    private Timestamp createdAt;

    // Constructor tanpa parameter, diperlukan oleh JPA.
    public Lokasi() {}

    // Constructor dengan parameter.
    public Lokasi(String namaLokasi, String negara, String provinsi, String kota, Timestamp createdAt) {
        this.namaLokasi = namaLokasi;
        this.negara = negara;
        this.provinsi = provinsi;
        this.kota = kota;
        this.createdAt = createdAt;
    }

    // Getter dan Setter untuk semua field.
    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getNamaLokasi() {
        return namaLokasi;
    }

    public void setNamaLokasi(String namaLokasi) {
        this.namaLokasi = namaLokasi;
    }

    public String getNegara() {
        return negara;
    }

    public void setNegara(String negara) {
        this.negara = negara;
    }

    public String getProvinsi() {
        return provinsi;
    }

    public void setProvinsi(String provinsi) {
        this.provinsi = provinsi;
    }

    public String getKota() {
        return kota;
    }

    public void setKota(String kota) {
        this.kota = kota;
    }

    public Timestamp getCreatedAt() {
        return createdAt;
    }

    public void setCreatedAt(Timestamp createdAt) {
        this.createdAt = createdAt;
    }
}
