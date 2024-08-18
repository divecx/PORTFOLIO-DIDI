package com.restapi_sei.projectsei.model;

import jakarta.persistence.*;
import java.sql.Timestamp;
import java.time.LocalDateTime;
import java.util.HashSet;
import java.util.Set;

@Entity
public class Proyek {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;

    @Column(name = "nama_proyek", nullable = false)
    private String namaProyek;

    @Column(name = "client", nullable = false)
    private String client;

    @Column(name = "tgl_mulai", nullable = false)
    private LocalDateTime tglMulai;

    @Column(name = "tgl_selesai", nullable = false)
    private LocalDateTime tglSelesai;

    @Column(name = "pimpinan_proyek", nullable = false)
    private String pimpinanProyek;

    @Column(name = "keterangan", nullable = true)
    private String keterangan;

    @Column(name = "created_at", nullable = false)
    private Timestamp createdAt;

    @ManyToMany
    @JoinTable(
            name = "proyek_lokasi",  // Tabel penghubung untuk relasi banyak-ke-banyak.
            joinColumns = @JoinColumn(name = "proyek_id"),
            inverseJoinColumns = @JoinColumn(name = "lokasi_id")
    )
    private Set<Lokasi> lokasiSet = new HashSet<>();  // Set digunakan untuk menghindari duplikasi lokasi.

    public Proyek() {}

    public Proyek(String namaProyek, String client, LocalDateTime tglMulai, LocalDateTime tglSelesai, String pimpinanProyek, String keterangan, Timestamp createdAt) {
        this.namaProyek = namaProyek;
        this.client = client;
        this.tglMulai = tglMulai;
        this.tglSelesai = tglSelesai;
        this.pimpinanProyek = pimpinanProyek;
        this.keterangan = keterangan;
        this.createdAt = createdAt;
    }

    // Getter dan Setter untuk semua field.
    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getNamaProyek() {
        return namaProyek;
    }

    public void setNamaProyek(String namaProyek) {
        this.namaProyek = namaProyek;
    }

    public String getClient() {
        return client;
    }

    public void setClient(String client) {
        this.client = client;
    }

    public LocalDateTime getTglMulai() {
        return tglMulai;
    }

    public void setTglMulai(LocalDateTime tglMulai) {
        this.tglMulai = tglMulai;
    }

    public LocalDateTime getTglSelesai() {
        return tglSelesai;
    }

    public void setTglSelesai(LocalDateTime tglSelesai) {
        this.tglSelesai = tglSelesai;
    }

    public String getPimpinanProyek() {
        return pimpinanProyek;
    }

    public void setPimpinanProyek(String pimpinanProyek) {
        this.pimpinanProyek = pimpinanProyek;
    }

    public String getKeterangan() {
        return keterangan;
    }

    public void setKeterangan(String keterangan) {
        this.keterangan = keterangan;
    }

    public Timestamp getCreatedAt() {
        return createdAt;
    }

    public void setCreatedAt(Timestamp createdAt) {
        this.createdAt = createdAt;
    }

    public Set<Lokasi> getLokasiSet() {
        return lokasiSet;
    }

    public void setLokasiSet(Set<Lokasi> lokasiSet) {
        this.lokasiSet = lokasiSet;
    }
}
