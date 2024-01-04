-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 05, 2024 at 12:40 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `projapi-ptsei`
--

-- --------------------------------------------------------

--
-- Table structure for table `db_user`
--

CREATE TABLE `db_user` (
  `userid` int(11) NOT NULL,
  `username` text NOT NULL,
  `password` text NOT NULL,
  `name` text NOT NULL,
  `email` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `db_user`
--

INSERT INTO `db_user` (`userid`, `username`, `password`, `name`, `email`) VALUES
(1, 'ddi13', 'didi12345', 'Antonius Didi Kurniadi', 'didi@gmail.com'),
(2, 'budi01', 'budi12345', 'Budiman Rudiansyah', 'budiansyah@gmail.com'),
(3, 'dedi07', 'dedi12345', 'Dedi Corbuzier', 'corzdedi@gmail.com'),
(4, 'dandy16', 'dandy12345', 'Gregorius Dandy Purnama', 'gregdandy@gmail.com'),
(5, 'rudi44', 'rudi12345', 'Rudi Hartanto', 'hartantorudi@gmail.com'),
(6, 'rizki07', 'rizki12345', 'Rizki Putra Pratama', 'rizkipr@gmail.com'),
(7, 'deandy11', 'deandy12345', 'Deandy KT', 'ktdeandy@gmail.com'),
(8, 'putri21', 'putri12345', 'Putri Yohana', 'puyohana@gmail.com'),
(9, 'ujang12', 'ujang12345', 'Ujang Adi Wijaya', 'ujangaw@gmail.com'),
(10, 'ujang12', 'ujang12345', 'Ujang Adi Wijaya', 'ujangaw@gmail.com'),
(11, 'udin55', 'udin12345', 'Udin Petot', 'udintot@gmail.com'),
(12, 'dini77', 'dini12345', 'Dini Ayu Ningsih', 'diningsih@gmail.com'),
(13, 'ratih99', 'ratih12345', 'Ratih Kurniasari', 'ratihkur@gmail.com'),
(14, 'ratih99', 'ratih12345', 'Ratih Kurniasari', 'ratihkur@gmail.com'),
(15, 'dadang99', 'dadang123', 'Dadang S.', 'dadangs@gmail.com'),
(16, 'mariana01', 'mariana123', 'Mariana Cahaya Sukma Putri', 'cspmariana@gmail.com');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `db_user`
--
ALTER TABLE `db_user`
  ADD PRIMARY KEY (`userid`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `db_user`
--
ALTER TABLE `db_user`
  MODIFY `userid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
