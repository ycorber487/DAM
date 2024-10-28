package es.ieslosmontecillos.AppAgendaBE.service;

import es.ieslosmontecillos.AppAgendaBE.entity.Provincia;
import java.util.List;
public interface ProvinciaService
{
    List<Provincia> findAll();
    Provincia save(Provincia provincia);
    Provincia findById(Long id);
    void delete(Provincia provincia);
}