#ifndef IUPAC_RINCHI_RINCHIREADERTESTS_HEADER_GUARD
#define IUPAC_RINCHI_RINCHIREADERTESTS_HEADER_GUARD

#ifdef MSVC
#pragma region InChI-Trust Licence
/*
 * Reaction International Chemical Identifier (RInChI)
 * Version 1
 * Software version 1.00
 * 2022-01-14
 * 
 * The RInChI library and programs are free software developed under the
 * auspices of the International Union of Pure and Applied Chemistry (IUPAC).
 * 
 * IUPAC/InChI-Trust Licence No.1.0 for the 
 * Reaction International Chemical Identifier (RInChI) Software version 1.0
 * Copyright (C) IUPAC and InChI Trust Limited
 * 
 * This library is free software; you can redistribute it and/or modify it 
 * under the terms of the IUPAC/InChI Trust InChI Licence No.1.0, 
 * or any later version.
 * 
 * Please note that this library is distributed WITHOUT ANY WARRANTIES 
 * whatsoever, whether expressed or implied.  See the IUPAC/InChI Trust
 * Licence for the International Chemical Identifier (InChI) Software
 * ("IUPAC/InChI-Trust InChI Licence No. 1.0" in "LICENCE.TXT")
 * for more details.
 * 
 * You should have received a copy of the IUPAC/InChI Trust InChI 
 * Licence No. 1.0 with this library; if not, please write to:
 * 
 *     The InChI Trust
 *     8 Cavendish Avenue
 *     Cambridge CB1 7US
 *     UK
 *
 * or email to: alan@inchi-trust.org.
 *
 */
#pragma endregion
#endif

#include <unit_test.h>

namespace rinchi_tests {

class RInChIReaderTests: public rinchi::unit_test::TestCase {
	public:
		void error_cases();
		void trivial_cases();

		void reactants_only();
		void products_only();
		void agents_only();
		void no_structures();

		// Test direct load of component InChI strings via text input.
		void load_inchis_from_text();

		RInChIReaderTests()
		{
			REGISTER_TEST(RInChIReaderTests, error_cases);
			REGISTER_TEST(RInChIReaderTests, trivial_cases);

			REGISTER_TEST(RInChIReaderTests, reactants_only);
			REGISTER_TEST(RInChIReaderTests, products_only);
			REGISTER_TEST(RInChIReaderTests, agents_only);
			REGISTER_TEST(RInChIReaderTests, no_structures);

			REGISTER_TEST(RInChIReaderTests, load_inchis_from_text);
		}

};

} // end of namespace

#endif
