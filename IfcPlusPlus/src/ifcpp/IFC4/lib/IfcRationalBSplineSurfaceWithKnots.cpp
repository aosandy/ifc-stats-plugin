/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBSplineSurfaceForm.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcKnotType.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcRationalBSplineSurfaceWithKnots.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcRationalBSplineSurfaceWithKnots 
IfcRationalBSplineSurfaceWithKnots::IfcRationalBSplineSurfaceWithKnots( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRationalBSplineSurfaceWithKnots::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRationalBSplineSurfaceWithKnots> copy_self( new IfcRationalBSplineSurfaceWithKnots() );
	if( m_UDegree ) { copy_self->m_UDegree = dynamic_pointer_cast<IfcInteger>( m_UDegree->getDeepCopy(options) ); }
	if( m_VDegree ) { copy_self->m_VDegree = dynamic_pointer_cast<IfcInteger>( m_VDegree->getDeepCopy(options) ); }
	copy_self->m_ControlPointsList.resize( m_ControlPointsList.size() );
	for( size_t ii=0; ii<m_ControlPointsList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcCartesianPoint> >& vec_ii = m_ControlPointsList[ii];
		std::vector<shared_ptr<IfcCartesianPoint> >& vec_ii_target = copy_self->m_ControlPointsList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcCartesianPoint>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcCartesianPoint>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	if( m_SurfaceForm ) { copy_self->m_SurfaceForm = dynamic_pointer_cast<IfcBSplineSurfaceForm>( m_SurfaceForm->getDeepCopy(options) ); }
	if( m_UClosed ) { copy_self->m_UClosed = dynamic_pointer_cast<IfcLogical>( m_UClosed->getDeepCopy(options) ); }
	if( m_VClosed ) { copy_self->m_VClosed = dynamic_pointer_cast<IfcLogical>( m_VClosed->getDeepCopy(options) ); }
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_UMultiplicities.size(); ++ii )
	{
		auto item_ii = m_UMultiplicities[ii];
		if( item_ii )
		{
			copy_self->m_UMultiplicities.emplace_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_VMultiplicities.size(); ++ii )
	{
		auto item_ii = m_VMultiplicities[ii];
		if( item_ii )
		{
			copy_self->m_VMultiplicities.emplace_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_UKnots.size(); ++ii )
	{
		auto item_ii = m_UKnots[ii];
		if( item_ii )
		{
			copy_self->m_UKnots.emplace_back( dynamic_pointer_cast<IfcParameterValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_VKnots.size(); ++ii )
	{
		auto item_ii = m_VKnots[ii];
		if( item_ii )
		{
			copy_self->m_VKnots.emplace_back( dynamic_pointer_cast<IfcParameterValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_KnotSpec ) { copy_self->m_KnotSpec = dynamic_pointer_cast<IfcKnotType>( m_KnotSpec->getDeepCopy(options) ); }
	copy_self->m_WeightsData.resize( m_WeightsData.size() );
	for( size_t ii=0; ii<m_WeightsData.size(); ++ii )
	{
		std::vector<shared_ptr<IfcReal> >& vec_ii = m_WeightsData[ii];
		std::vector<shared_ptr<IfcReal> >& vec_ii_target = copy_self->m_WeightsData[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcReal>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcReal>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcRationalBSplineSurfaceWithKnots::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRATIONALBSPLINESURFACEWITHKNOTS" << "(";
	if( m_UDegree ) { m_UDegree->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_VDegree ) { m_VDegree->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList2D( stream, m_ControlPointsList );
	stream << ",";
	if( m_SurfaceForm ) { m_SurfaceForm->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UClosed ) { m_UClosed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_VClosed ) { m_VClosed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfIntList( stream, m_UMultiplicities, false );
	stream << ",";
	writeTypeOfIntList( stream, m_VMultiplicities, false );
	stream << ",";
	writeTypeOfRealList( stream, m_UKnots, false );
	stream << ",";
	writeTypeOfRealList( stream, m_VKnots, false );
	stream << ",";
	if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfRealList2D( stream, m_WeightsData, false );
	stream << ");";
}
void IfcRationalBSplineSurfaceWithKnots::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRationalBSplineSurfaceWithKnots::toString() const { return L"IfcRationalBSplineSurfaceWithKnots"; }
void IfcRationalBSplineSurfaceWithKnots::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 13 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRationalBSplineSurfaceWithKnots, expecting 13, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_UDegree = IfcInteger::createObjectFromSTEP( args[0], map );
	m_VDegree = IfcInteger::createObjectFromSTEP( args[1], map );
	readEntityReferenceList2D( args[2], m_ControlPointsList, map );
	m_SurfaceForm = IfcBSplineSurfaceForm::createObjectFromSTEP( args[3], map );
	m_UClosed = IfcLogical::createObjectFromSTEP( args[4], map );
	m_VClosed = IfcLogical::createObjectFromSTEP( args[5], map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[6], map );
	readTypeOfIntegerList( args[7], m_UMultiplicities );
	readTypeOfIntegerList( args[8], m_VMultiplicities );
	readTypeOfRealList( args[9], m_UKnots );
	readTypeOfRealList( args[10], m_VKnots );
	m_KnotSpec = IfcKnotType::createObjectFromSTEP( args[11], map );
	readTypeOfRealList2D( args[12], m_WeightsData );
}
void IfcRationalBSplineSurfaceWithKnots::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBSplineSurfaceWithKnots::getAttributes( vec_attributes );
	if( !m_WeightsData.empty() )
	{
		shared_ptr<AttributeObjectVector> outer_vector( new AttributeObjectVector() );
		vec_attributes.emplace_back( std::make_pair( "WeightsData", outer_vector ) );
		for( size_t ii=0; ii<m_WeightsData.size(); ++ii )
		{
			const std::vector<shared_ptr<IfcReal> >& vec_ii = m_WeightsData[ii];
			shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
			outer_vector->m_vec.push_back( inner_vector );
			std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
		}
	}
}
void IfcRationalBSplineSurfaceWithKnots::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBSplineSurfaceWithKnots::getAttributesInverse( vec_attributes_inverse );
}
void IfcRationalBSplineSurfaceWithKnots::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBSplineSurfaceWithKnots::setInverseCounterparts( ptr_self_entity );
}
void IfcRationalBSplineSurfaceWithKnots::unlinkFromInverseCounterparts()
{
	IfcBSplineSurfaceWithKnots::unlinkFromInverseCounterparts();
}
