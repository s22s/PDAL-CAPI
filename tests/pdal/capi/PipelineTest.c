/*
 * Copyright (c) Simverge Software LLC - All Rights Reserved
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include <pdal/capi/Pipeline.h>

#include "greatest.h"

SUITE(PipelineTest);

TEST PDALCreatePipelineTest(void) {
	SKIPm("TODO");
}

TEST PDALDisposePipelineTest(void) {
	SKIPm("TODO");
}

TEST PDALGetPipelineAsStringTest(void) {
	SKIPm("TODO");
}

TEST PDALGetPipelineMetadataTest(void) {
	SKIPm("TODO");
}

TEST PDALGetPipelineSchemaTest(void) {
	SKIPm("TODO");
}

TEST PDALGetSetPipelineLogTest(void) {
	SKIPm("TODO");
}

TEST PDALExecutePipelineTest(void) {
	SKIPm("TODO");
}

TEST PDALValidatePipelineTest(void) {
	PipelinePtr pipeline = PDALCreatePipeline(NULL);
	bool valid = PDALValidatePipeline(pipeline);
	ASSERT_EQm("Pipeline evaluated as valid when it should be invalid", false, valid);
}

GREATEST_SUITE(PipelineTest)
{
	RUN_TEST(PDALCreatePipelineTest);
	RUN_TEST(PDALDisposePipelineTest);
}
