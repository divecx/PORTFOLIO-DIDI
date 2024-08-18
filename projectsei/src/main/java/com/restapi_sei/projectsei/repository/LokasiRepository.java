package com.restapi_sei.projectsei.repository;

import com.restapi_sei.projectsei.model.Lokasi;
import org.springframework.data.jpa.repository.JpaRepository;

public interface LokasiRepository extends JpaRepository<Lokasi, Integer> {
    // JpaRepository menyediakan operasi CRUD dasar.
}
