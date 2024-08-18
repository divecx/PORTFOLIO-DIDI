package com.restapi_sei.projectsei.repository;

import com.restapi_sei.projectsei.model.Proyek;
import org.springframework.data.jpa.repository.JpaRepository;

public interface ProyekRepository extends JpaRepository<Proyek, Integer> {
    // JpaRepository menyediakan operasi CRUD dasar.
}
