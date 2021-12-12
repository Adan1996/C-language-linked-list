/*
     * Konsep Dasar:
     *       node                   node                   node
     *  ---------------        ---------------        ---------------
     *  | info | link |--------| info | link |--------| info | link |
     *  ---------------        ---------------        ---------------
     * 
     *   start
     *  --------
     *  | 1002 |
     *  --------
     *      |
     *      |         node                   node                   node
     *      |   -------------            -------------          -------------
     *      ----| 25 | 1006 |------------| 15 | 1009 |----------| 10 |      |-----
     *          -------------            -------------          -------------     |
     *               1002                   1006                    1009          |
     *                                                                            |
     *                                                                          NULL
     * 
     * Linkedlist tidak dapat mengakses secara acak, melainkan dengan cara sequencial
     * Ada beberapa metode untuk mengakses linkedlist, yakni
     * - Traversal
     *   adalah cara mengakses list yang dimulai dari node pertama sampai dengan node yang diinginkan
     * - Display
     *   adalah cara mengakses ke semua list
     * - Search
     *   mencari informasi tertentu dalam list
     * - Insertion
     *   - insertion at the begining
     *   - insertion at the end
     *   - insertion beetwen nodes
     * - Selection
    */