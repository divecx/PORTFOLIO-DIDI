package com.restapi_sei.projectsei.controller;

import com.restapi_sei.projectsei.model.Proyek;
import com.restapi_sei.projectsei.service.ProyekService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/proyek")
public class ProyekController {

    @Autowired
    private ProyekService proyekService;

    @PostMapping
    public Proyek addProyek(@RequestBody Proyek proyek) {
        return proyekService.addProyek(proyek);
    }

    @GetMapping
    public List<Proyek> getAllProyek() {
        return proyekService.getAllProyek();
    }

    @PutMapping("/{id}")
    public Proyek updateProyek(@PathVariable Integer id, @RequestBody Proyek proyek) {
        proyek.setId(id);
        return proyekService.updateProyek(proyek);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<?> deleteProyek(@PathVariable Integer id) {
        proyekService.deleteProyek(id);
        return ResponseEntity.ok().build();
    }
}
