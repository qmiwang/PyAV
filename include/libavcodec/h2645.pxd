
cdef extern from "libavcodec/h2645_parse.h" nogil:

    cdef struct H2645NAL:

        int size
        uint8_t * data

        int size_bits
        int raw_size
        uint8_t raw_data

        int type
        int temporal_id

    cdef struct H2645Packet:

        H2645NAL * nals
        int nb_nals
        int nals_allocated
