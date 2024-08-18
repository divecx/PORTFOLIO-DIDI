package com.restapi_sei.projectsei.controller;

import com.restapi_sei.projectsei.model.Lokasi;
import com.restapi_sei.projectsei.service.LokasiService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/lokasi")
public class LokasiController {

    @Autowired
    private LokasiService lokasiService;

    @PostMapping
    public Lokasi addLokasi(@RequestBody Lokasi lokasi) {
        return lokasiService.addLokasi(lokasi);
    }

    @GetMapping
    public List<Lokasi> getAllLokasi() {
        return lokasiService.getAllLokasi();
    }

    @PutMapping("/{id}")
    public Lokasi updateLokasi(@PathVariable Integer id, @RequestBody Lokasi lokasi) {
        lokasi.setId(id);
        return lokasiService.updateLokasi(lokasi);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<?> deleteLokasi(@PathVariable Integer id) {
        lokasiService.deleteLokasi(id);
        return ResponseEntity.ok().build();
    }
}
